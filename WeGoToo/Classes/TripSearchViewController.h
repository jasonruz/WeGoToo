//
//  TripSearch.h
//  WeGoToo
//
//  Created by Jason on 2/02/11.
//  Copyright 2011 Jason. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FoundTripsViewController;

@interface TripSearchViewController : UITableViewController {
	UITableViewCell *cell0;
	UITableViewCell *cell1;
	UITableViewCell *cell2;
	FoundTripsViewController *foundTripsListViewController;
}

@property (nonatomic, retain) IBOutlet UITableViewCell *cell0;
@property (nonatomic, retain) IBOutlet UITableViewCell *cell1;
@property (nonatomic, retain) IBOutlet UITableViewCell *cell2;
@property (nonatomic, retain) IBOutlet UILabel *cell2Label;

- (IBAction)logHello;
- (IBAction)sliderValueChanged:(UISlider *)slider;
@end
