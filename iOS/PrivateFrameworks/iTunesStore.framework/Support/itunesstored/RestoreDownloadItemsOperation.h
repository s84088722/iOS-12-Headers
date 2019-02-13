//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray, SSAccount;
@protocol RestoreDownloadItemsOperationDelegate;

@interface RestoreDownloadItemsOperation : ISOperation
{
    SSAccount *_account;
    NSArray *_downloadItems;
    NSMutableArray *_responses;
    _Bool _shouldShowTermsAndConditionsDialog;
}

- (void).cxx_destruct;
- (void)_showDialogsForResponse:(id)arg1;
- (_Bool)_runWithOptions:(id)arg1 error:(id *)arg2;
- (id)_runWithItems:(id)arg1 options:(id)arg2;
- (id)_runWithBodyData:(id)arg1 contentEncoding:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)_run;
- (id)_plistDataWithItems:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_newResponseWithItems:(id)arg1 error:(id)arg2;
- (void)_addResponse:(id)arg1;
- (void)run;
@property _Bool shouldShowTermsAndConditionsDialog;
@property(readonly) NSArray *responses;
@property(readonly) NSArray *downloadItems;
@property(readonly) SSAccount *account;
- (id)initWithDownloadItems:(id)arg1 account:(id)arg2;

// Remaining properties
@property __weak id <RestoreDownloadItemsOperationDelegate> delegate; // @dynamic delegate;

@end

