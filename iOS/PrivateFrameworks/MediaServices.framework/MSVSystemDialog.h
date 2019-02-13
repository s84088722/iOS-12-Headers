//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSVSystemDialogOptions, NSArray, NSMutableArray;

@interface MSVSystemDialog : NSObject
{
    NSMutableArray *_textFields;
    struct __CFUserNotification *_presentedUserNotification;
    struct __CFRunLoopSource *_activeRunLoopSource;
    CDUnknownBlockType _pendingCompletion;
    MSVSystemDialogOptions *_options;
}

+ (id)systemDialogWithOptions:(id)arg1;
@property(readonly, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(readonly, nonatomic) MSVSystemDialogOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)dismiss;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearTextFields;
- (void)addTextFieldWithTitle:(id)arg1 secure:(_Bool)arg2;
- (void)addTextField:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType pendingCompletion;
@property(nonatomic) struct __CFRunLoopSource *activeRunLoopSource;
@property(nonatomic) struct __CFUserNotification *presentedUserNotification;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end

