//
//  TripSearch.h
//  WeGoToo
//
//  Created by Jason on 2/02/11.
//  Copyright 2011 Jason. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FBLoginButton.h"

@class FoundTripsViewController;

@interface TripSearchViewController : UITableViewController {
	UITableViewCell *cell0;
	UITableViewCell *cell1;
	UITableViewCell *cell2;
	//FoundTripsViewController *foundTripsViewController;
	FBLoginButton* _fbButton;

}

@property (nonatomic, retain) IBOutlet UITableViewCell *cell0;
@property (nonatomic, retain) IBOutlet UITableViewCell *cell1;
@property (nonatomic, retain) IBOutlet UITableViewCell *cell2;
@property (nonatomic, retain) IBOutlet UILabel *cell2Label;

- (IBAction)login;
- (IBAction)logHello;
- (IBAction)sliderValueChanged:(UISlider *)slider;
@end
