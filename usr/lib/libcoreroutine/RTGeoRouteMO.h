/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class GEORoute, NSUUID, NSDate;

@interface RTGeoRouteMO : NSManagedObject

@property (nonatomic,retain) GEORoute * geoRoute; 
@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,retain) NSUUID * originLocationOfInterestIdentifier; 
@property (nonatomic,retain) NSUUID * destinationLocationOfInterestIdentifier; 
@property (nonatomic,copy) NSDate * creationDate; 
+(id)fetchRequest;
+(id)managedObjectWithGeoRoute:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end
