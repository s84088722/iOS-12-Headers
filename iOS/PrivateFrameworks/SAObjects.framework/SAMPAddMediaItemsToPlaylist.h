//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAMPPlaylist;

@interface SAMPAddMediaItemsToPlaylist : SABaseClientBoundCommand
{
}

+ (id)addMediaItemsToPlaylistWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addMediaItemsToPlaylist;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAMPPlaylist *playlist;
@property(copy, nonatomic) NSArray *mediaItems;
@property(copy, nonatomic) NSString *insertLocation;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

