//
//  TripSearch.m
//  WeGoToo
//
//  Created by Jason on 2/02/11.
//  Copyright 2011 Jason. All rights reserved.
//

#import "TripSearchViewController.h"
#import "FoundTripsViewController.h"

@implementation TripSearchViewController

#pragma mark -
#pragma mark View lifecycle


- (void)viewDidLoad {
    [super viewDidLoad];

    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
	[self setTitle:@"WeGoToo"];
}


/*
- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
}
*/
/*
- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
}
*/
/*
- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
}
*/
/*
- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
}
*/
/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations.
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

#pragma mark -
#pragma mark Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    // Return the number of sections.
    return 5;
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    // Return the number of rows in the section.
	if (section == 0) {
		return 2;
	}
	return 1;
}


// Customize the appearance of table view cells.
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    /*
    static NSString *CellIdentifier = @"Cell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        cell = [[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier] autorelease];
    }
    
    // Configure the cell...
    
    return cell;
	 */
	
	if ([indexPath section] == 0) {
		// Location cells -- used a custom cell in IB but probably could
		// have been done in code using Style2
		if ([indexPath row] == 0) {
			// From Location cell
			return cell0;
		}
		// To Location cell
		return cell1;
/*	} else if ([indexPath section] == 3) {
		UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"SegmentedCell"];
		if (!cell) {
			cell = [[[UITableViewCell alloc]
					 initWithStyle:UITableViewCellStyleDefault
					 reuseIdentifier:@"SegmentedCell"] autorelease];
		}
		// Why does everyone have different numbers for the CGRect?
		UISegmentedControl *segmentedControl = [[UISegmentedControl alloc]
												initWithFrame:CGRectMake(-1.0f, -1.0f, 302.0f, 46.0f)];
		[segmentedControl insertSegmentWithTitle:@"Car" atIndex:0 animated:NO];
		[segmentedControl insertSegmentWithTitle:@"Taxi" atIndex:1 animated:NO];
		[segmentedControl insertSegmentWithTitle:@"Bicycle" atIndex:2 animated:NO];
		[cell.contentView addSubview:segmentedControl];
		return cell;
 */
	} else if ([indexPath section] == 4) {
		// Use a Button for "Find Trips"
		UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"ButtonCell"];
		if (!cell) {
			cell = [[[UITableViewCell alloc]
					 initWithStyle:UITableViewCellStyleDefault
					 reuseIdentifier:@"ButtonCell"] autorelease];
		}
		UIButton *button = [UIButton buttonWithType:UIButtonTypeRoundedRect];
		[button setFrame:CGRectMake(-1.0f, -1.0f, 302.0f, 46.0f)];
		[button setTitle:@"Find Trips" forState:UIControlStateNormal];
		[button addTarget:self
					   action:@selector(findButtonPressed:) 
			 forControlEvents:UIControlEventTouchUpInside];
		[cell.contentView addSubview:button];
		return cell;
	} else {
		// Use a Style 1 Cell for the Time, Cost and Transport Type
		UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"Style1Cell"];
		if (!cell) {
			cell = [[[UITableViewCell alloc]
					 initWithStyle:UITableViewCellStyleValue1
					 reuseIdentifier:@"Style1Cell"] autorelease];
		}
		[cell setAccessoryType:UITableViewCellAccessoryDisclosureIndicator];

		switch ([indexPath section]) {
			case 1:
				[[cell textLabel] setText:@"Arrive by"];
				[[cell detailTextLabel] setText:@"9 am on Monday"];
				break;
			case 2:
				[[cell textLabel] setText:@"Maximum cost"];
				[[cell detailTextLabel] setText:@"$5.00"];
				break;
			case 3:
				[[cell textLabel] setText:@"Transport type"];
				[[cell detailTextLabel] setText:@"Car, Taxi, Bicycle"];
				break;
			default:
				break;
		}
		return cell;
	}
	
	/*
	NSArray *section0 = [NSArray arrayWithObjects:cell0, cell1, nil];
	NSArray *section1 = [NSArray arrayWithObjects:cell2, nil];
	sections = [NSArray arrayWithObjects:section0, section1, nil];	
	
	
	return [[sections objectAtIndex:[indexPath section]]
					  objectAtIndex:[indexPath row]];
	 */
}

/*
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 50.0; // your dynamic height...
}
*/

/*
// Override to support conditional editing of the table view.
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the specified item to be editable.
    return YES;
}
*/


/*
// Override to support editing the table view.
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath {
    
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // Delete the row from the data source.
        [tableView deleteRowsAtIndexPaths:[NSArray arrayWithObject:indexPath] withRowAnimation:UITableViewRowAnimationFade];
    }   
    else if (editingStyle == UITableViewCellEditingStyleInsert) {
        // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view.
    }   
}
*/


/*
// Override to support rearranging the table view.
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath {
}
*/


/*
// Override to support conditional rearranging of the table view.
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the item to be re-orderable.
    return YES;
}
*/


#pragma mark -
#pragma mark Table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    // Navigation logic may go here. Create and push another view controller.
    /*
    <#DetailViewController#> *detailViewController = [[<#DetailViewController#> alloc] initWithNibName:@"<#Nib name#>" bundle:nil];
    // ...
    // Pass the selected object to the new view controller.
    [self.navigationController pushViewController:detailViewController animated:YES];
    [detailViewController release];
    */
}

- (void)findButtonPressed:(id)sender {
	NSLog(@"Hi.");
	FoundTripsViewController *foundTripsViewController = [[FoundTripsViewController alloc] 
														  initWithNibName:@"FoundTripsView"
														  bundle:nil];
	[self.navigationController pushViewController:foundTripsViewController animated:YES];
	[foundTripsViewController release];
}

#pragma mark -
#pragma mark Memory management

- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Relinquish ownership any cached data, images, etc. that aren't in use.
}

- (void)viewDidUnload {
    // Relinquish ownership of anything that can be recreated in viewDidLoad or on demand.
    // For example: self.myOutlet = nil;
}


- (void)dealloc {
    [super dealloc];
}


@end

