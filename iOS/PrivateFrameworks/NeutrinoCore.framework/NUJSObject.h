//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

@interface NUJSObject : NUJSProxy
{
}

+ (struct OpaqueJSClass *)jsClass;
- (id)toObject;
- (id)toString;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (_Bool)hasProperty:(id)arg1;
- (id)JSValueWithContext:(id)arg1;

@end

