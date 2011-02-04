//
//  WeGoTooAppDelegate.h
//  WeGoToo
//
//  Created by Jason on 1/02/11.
//  Copyright 2011 Jason. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "FBConnect.h"

@interface WeGoTooAppDelegate : NSObject 
	<UIApplicationDelegate, FBSessionDelegate> {
    UITabBarController* tabBarController;
    UIWindow *window;
	Facebook* _facebook;
	NSArray* _permissions;
	
@private
    NSManagedObjectContext *managedObjectContext_;
    NSManagedObjectModel *managedObjectModel_;
    NSPersistentStoreCoordinator *persistentStoreCoordinator_;
}

// Class method for convenience
+ (WeGoTooAppDelegate *)sharedAppDelegate;

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (readonly) Facebook *facebook;

- (NSURL *)applicationDocumentsDirectory;
- (void)saveContext;
- (void)facebookAuthorize;

@end

