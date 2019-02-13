//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPresentationSizeObserverFactory-Protocol.h>

@class NSString;
@protocol SVPlayerItemObserverFactory;

@interface SVVideoPresentationSizeObserverFactory : NSObject <SVVideoPresentationSizeObserverFactory>
{
    id <SVPlayerItemObserverFactory> _playerItemObserverFactory;
}

@property(readonly, nonatomic) id <SVPlayerItemObserverFactory> playerItemObserverFactory; // @synthesize playerItemObserverFactory=_playerItemObserverFactory;
- (void).cxx_destruct;
- (id)createPresentationSizeObserverForVideo:(id)arg1;
- (id)initWithPlayerItemObserverFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

