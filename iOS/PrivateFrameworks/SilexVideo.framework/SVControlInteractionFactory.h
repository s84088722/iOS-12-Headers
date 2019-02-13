//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVControlInteractionFactory-Protocol.h>

@class NSString;
@protocol SVInteractionContextFactory;

@interface SVControlInteractionFactory : NSObject <SVControlInteractionFactory>
{
    id <SVInteractionContextFactory> _interactionContextFactory;
}

@property(readonly, nonatomic) id <SVInteractionContextFactory> interactionContextFactory; // @synthesize interactionContextFactory=_interactionContextFactory;
- (void).cxx_destruct;
- (id)createInteractionWithControl:(id)arg1 events:(unsigned long long)arg2;
- (id)initWithInteractionContextFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

