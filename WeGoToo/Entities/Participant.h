//
//  Participant.h
//  WeGoToo
//
//  Created by Dian Tjondronegoro on 4/02/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Person;
@class Trip;

@interface Participant :  NSManagedObject  
{
}

@property (nonatomic, retain) NSNumber * participationStatus;
@property (nonatomic, retain) Person * person;
@property (nonatomic, retain) Trip * trip;

@end



