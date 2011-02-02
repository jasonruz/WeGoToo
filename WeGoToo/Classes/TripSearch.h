//
//  TripSearch.h
//  WeGoToo
//
//  Created by Dian Tjondronegoro on 2/02/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface TripSearch : UITableViewController {
	UITableViewCell *cell0;
	UITableViewCell *cell1;
	UITableViewCell *cell2;
	UILabel *cell2Label;
}

@property (nonatomic, retain) IBOutlet UITableViewCell *cell0;
@property (nonatomic, retain) IBOutlet UITableViewCell *cell1;
@property (nonatomic, retain) IBOutlet UITableViewCell *cell2;
@property (nonatomic, retain) IBOutlet UILabel *cell2Label;

- (IBAction)logHello;
- (IBAction)sliderValueChanged:(UISlider *)slider;
@end
