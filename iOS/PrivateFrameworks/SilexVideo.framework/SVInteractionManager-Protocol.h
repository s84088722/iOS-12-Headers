//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVInteraction, SVInteractionHandling, SVInteractionObserving, SVVideoInteractionHandlerFactory, SVVideoInteractionObserverFactory;

@protocol SVInteractionManager <NSObject>
- (void)registerInteraction:(id <SVInteraction>)arg1 withInteractionObserverFactory:(id <SVVideoInteractionObserverFactory>)arg2;
- (void)registerInteraction:(id <SVInteraction>)arg1 withInteractionHandlerFactory:(id <SVVideoInteractionHandlerFactory>)arg2;
- (void)registerInteraction:(id <SVInteraction>)arg1 withInteractionObserver:(id <SVInteractionObserving>)arg2;
- (void)registerInteraction:(id <SVInteraction>)arg1 withInteractionHandler:(id <SVInteractionHandling>)arg2;
@end

