//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoProviderFactory-Protocol.h>

@class NSString;
@protocol NUVideoEventTracker;

@interface NUVideoProviderFactory : NSObject <NUVideoProviderFactory>
{
    id <NUVideoEventTracker> _eventTracker;
}

@property(readonly, nonatomic) id <NUVideoEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
- (void).cxx_destruct;
- (id)createVideoProviderWithVideoItem:(id)arg1;
- (id)initWithEventTracker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

