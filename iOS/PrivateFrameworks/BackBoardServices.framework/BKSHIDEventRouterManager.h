//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BackBoardServices/BKSHIDEventRouterManagerBase.h>

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase
{
    _Bool _needsFlush;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool needsFlush; // @synthesize needsFlush=_needsFlush;
- (void)_routerUpdated:(id)arg1;
- (void)_flush;
- (void)_flushTrigger;
- (void)setEventRouters:(id)arg1;
- (void)dealloc;
- (id)init;

@end

