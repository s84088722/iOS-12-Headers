//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BFFNavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface BFFNavigationObserver : NSObject
{
    id <BFFNavigationControllerDelegate> _observer;
}

+ (id)observerWithObserver:(id)arg1;
@property(nonatomic) __weak id <BFFNavigationControllerDelegate> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end

