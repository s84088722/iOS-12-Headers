//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPInternal/CDPDBackupErrorProviderImpl.h>

@interface CDPDBackupIDMSErrorProvider : CDPDBackupErrorProviderImpl
{
}

- (void)handleSoftLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleHardLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)recordNotFoundErrorWithUnderlyingError:(id)arg1;
- (id)hardLimitErrorForRecord:(id)arg1;
- (id)globalHardLimitErrorWithRecord:(id)arg1;
- (id)globalHardLimitError;
- (id)cooldownErrorWithUnderlyingError:(id)arg1;
- (_Bool)supportsErrorPresentation;

@end
