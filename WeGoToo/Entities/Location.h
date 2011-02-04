//
//  Location.h
//  WeGoToo
//
//  Created by Dian Tjondronegoro on 4/02/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Trip;

@interface Location :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) NSString * category;
@property (nonatomic, retain) NSString * zip;
@property (nonatomic, retain) NSNumber * fbLocationID;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSString * street;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * country;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet* fromTrips;
@property (nonatomic, retain) NSSet* toTrips;

@end


@interface Location (CoreDataGeneratedAccessors)
- (void)addFromTripsObject:(Trip *)value;
- (void)removeFromTripsObject:(Trip *)value;
- (void)addFromTrips:(NSSet *)value;
- (void)removeFromTrips:(NSSet *)value;

- (void)addToTripsObject:(Trip *)value;
- (void)removeToTripsObject:(Trip *)value;
- (void)addToTrips:(NSSet *)value;
- (void)removeToTrips:(NSSet *)value;

@end

