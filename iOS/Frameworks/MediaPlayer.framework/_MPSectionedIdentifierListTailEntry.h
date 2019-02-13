//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/_MPSectionedIdentifierListProxyEntry.h>

#import <MediaPlayer/MPSectionedIdentifierListEnumerationTrackingEntry-Protocol.h>

@class NSString;

@interface _MPSectionedIdentifierListTailEntry : _MPSectionedIdentifierListProxyEntry <MPSectionedIdentifierListEnumerationTrackingEntry>
{
    NSString *_sectionIdentifier;
}

+ (id)tailEntryWithSection:(id)arg1 branchDepth:(long long)arg2;
@property(readonly, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (void).cxx_destruct;
- (id)trackingEntryResult;

// Remaining properties
@property(readonly, nonatomic) long long branchDepth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long entryType;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

