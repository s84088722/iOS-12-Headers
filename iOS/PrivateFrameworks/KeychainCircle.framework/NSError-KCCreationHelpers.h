//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (KCCreationHelpers)
+ (id)errorWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(struct __va_list_tag [1])arg3;
+ (id)errorWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithOSStatus:(int)arg1 description:(id)arg2 args:(struct __va_list_tag [1])arg3;
+ (id)errorWithOSStatus:(int)arg1 userInfo:(id)arg2;
- (id)initWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (id)initWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
- (id)initWithOSStatus:(int)arg1 description:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (id)initWithOSStatus:(int)arg1 userInfo:(id)arg2;
@end

