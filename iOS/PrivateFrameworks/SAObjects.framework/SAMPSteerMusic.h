//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SAMPCollection, SAMPMediaItem;

@interface SAMPSteerMusic : SADomainCommand
{
}

+ (id)steerMusicWithDictionary:(id)arg1 context:(id)arg2;
+ (id)steerMusic;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *steerableBlob;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(retain, nonatomic) SAMPMediaItem *currentListeningToItem;
@property(retain, nonatomic) SAMPCollection *currentListeningToCollection;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

