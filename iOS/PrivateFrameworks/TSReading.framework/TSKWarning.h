//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TSKWarning : NSObject
{
    NSString *mMessage;
    NSArray *mInfos;
    unsigned int mKind;
    int mSeverity;
}

+ (id)warningWithMessage:(id)arg1 kind:(unsigned int)arg2 severity:(int)arg3 infos:(id)arg4;
+ (id)warningWithMessage:(id)arg1 kind:(unsigned int)arg2 infos:(id)arg3;
+ (id)warningWithMessage:(id)arg1;
+ (id)warningWithMessage:(id)arg1 severity:(int)arg2;
@property(readonly, nonatomic) int severity; // @synthesize severity=mSeverity;
@property(readonly, nonatomic) unsigned int kind; // @synthesize kind=mKind;
@property(copy, nonatomic) NSArray *infos; // @synthesize infos=mInfos;
@property(copy, nonatomic) NSString *message; // @synthesize message=mMessage;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 kind:(unsigned int)arg2 severity:(int)arg3 infos:(id)arg4;

@end

