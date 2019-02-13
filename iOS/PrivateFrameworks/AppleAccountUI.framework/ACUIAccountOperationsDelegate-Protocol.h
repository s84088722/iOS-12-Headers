//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class ACAccount, ACDataclassAction, ACUIAccountOperationsHelper, ACUIDataclassActionPicker, NSError;

@protocol ACUIAccountOperationsDelegate <NSObject>
- (ACDataclassAction *)operationsHelper:(ACUIAccountOperationsHelper *)arg1 desiredDataclassActionFromPicker:(ACUIDataclassActionPicker *)arg2;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 didRemoveAccount:(ACAccount *)arg2 withSuccess:(_Bool)arg3 error:(NSError *)arg4;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 willRemoveAccount:(ACAccount *)arg2;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 didSaveAccount:(ACAccount *)arg2 withSuccess:(_Bool)arg3 error:(NSError *)arg4;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 willSaveAccount:(ACAccount *)arg2;

@optional
- (long long)operationsHelper:(ACUIAccountOperationsHelper *)arg1 shouldRemoveOrDisableAccount:(ACAccount *)arg2;
- (_Bool)operationsHelper:(ACUIAccountOperationsHelper *)arg1 shouldRemoveAccount:(ACAccount *)arg2;
@end

