//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@interface NotesCIDURLProtocol : NSURLProtocol
{
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)unregisterDataProviderForCIDURL:(id)arg1;
+ (void)registerDataProvider:(id)arg1 forCIDURL:(id)arg2;
- (void)stopLoading;
- (void)startLoading;

@end

