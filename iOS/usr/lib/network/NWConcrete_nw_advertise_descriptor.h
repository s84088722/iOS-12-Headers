//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_advertise_descriptor-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_advertise_descriptor : NSObject <OS_nw_advertise_descriptor>
{
    char *_name;
    char *_type;
    char *_domain;
    char *_txtRecord;
    unsigned long long _txtLength;
    unsigned int _no_auto_rename:1;
    unsigned int __pad_bits:7;
}

@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithName:(const char *)arg1 type:(const char *)arg2 domain:(const char *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

