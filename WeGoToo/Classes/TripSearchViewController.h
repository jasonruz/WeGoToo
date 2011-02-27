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
	UITableViewCell *fromCell;
	UITableViewCell *toCell;
	UITextField *fromCellText;
	UITextField *toCellText;
	//FoundTripsViewController *foundTripsViewController;
	FBLoginButton* _fbButton;
}

@property (nonatomic, retain) IBOutlet UITableViewCell *fromCell;
@property (nonatomic, retain) IBOutlet UITableViewCell *toCell;
@property (nonatomic, retain) IBOutlet UITextField *fromCellText;
@property (nonatomic, retain) IBOutlet UITextField *toCellText;

- (IBAction)login;
//- (IBAction)logHello;
//- (IBAction)sliderValueChanged:(UISlider *)slider;
@end
