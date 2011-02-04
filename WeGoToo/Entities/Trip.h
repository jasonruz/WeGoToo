//
//  Trip.h
//  WeGoToo
//
//  Created by Jason on 4/02/11.
//  Copyright 2011 Jason. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Location;
@class Participant;
@class Person;

@interface Trip :  NSManagedObject  
{
}

@property (nonatomic, retain) NSNumber * cost;
@property (nonatomic, retain) NSDate * departTime;
@property (nonatomic, retain) NSDate * arriveTime;
@property (nonatomic, retain) NSNumber * transportType;
@property (nonatomic, retain) Location * fromLocation;
@property (nonatomic, retain) Location * toLocation;
@property (nonatomic, retain) NSSet* participants;
@property (nonatomic, retain) Person * ownerPerson;

@end


@interface Trip (CoreDataGeneratedAccessors)
- (void)addParticipantsObject:(Participant *)value;
- (void)removeParticipantsObject:(Participant *)value;
- (void)addParticipants:(NSSet *)value;
- (void)removeParticipants:(NSSet *)value;

@end

