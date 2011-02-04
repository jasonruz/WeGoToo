//
//  Person.h
//  WeGoToo
//
//  Created by Jason on 4/02/11.
//  Copyright 2011 Jason. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Participant;
@class Trip;

@interface Person :  NSManagedObject  
{
}

@property (nonatomic, retain) NSData * profilePicture;
@property (nonatomic, retain) NSNumber * yourRelationship;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * fbPersonID;
@property (nonatomic, retain) NSSet* participation;
@property (nonatomic, retain) NSSet* trips;

@end


@interface Person (CoreDataGeneratedAccessors)
- (void)addParticipationObject:(Participant *)value;
- (void)removeParticipationObject:(Participant *)value;
- (void)addParticipation:(NSSet *)value;
- (void)removeParticipation:(NSSet *)value;

- (void)addTripsObject:(Trip *)value;
- (void)removeTripsObject:(Trip *)value;
- (void)addTrips:(NSSet *)value;
- (void)removeTrips:(NSSet *)value;

@end

