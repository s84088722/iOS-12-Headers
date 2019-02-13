//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (TSUAdditions)
+ (id)tsu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
- (_Bool)tsu_isErrorPassingTest:(CDUnknownBlockType)arg1;
- (void)tsu_enumerateErrorUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool tsu_isNoPermissionError;
@property(readonly, nonatomic) _Bool tsu_isNoSuchFileError;
@property(readonly, nonatomic) _Bool tsu_isCancelError;
@property(readonly, nonatomic) _Bool tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;
- (id)tsu_errorPreservingCancel;
- (id)tsu_errorPreservingAlertTitle;
@end

