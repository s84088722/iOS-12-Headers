//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNContact.h>

@class NSArray, NSString, NSURL;

@interface CNContact (TUSearchUtilities)
+ (id)keysToFetchForFaceTime;
@property(readonly, nonatomic) NSArray *emailAddressStrings;
@property(readonly, nonatomic) NSArray *phoneNumberStrings;
@property(readonly, nonatomic) NSURL *faceTimeQuicklookURL;
@property(readonly, nonatomic) NSString *anyDestinationID;
@end

