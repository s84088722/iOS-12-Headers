//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSImage, NSString;
@protocol OS_dispatch_queue;

@interface AMSDialog : NSObject
{
    NSObject<OS_dispatch_queue> *_systemDialogQueue;
    NSArray *_buttons;
    CDUnknownBlockType _completionHandler;
    NSImage *_icon;
    NSString *_message;
    long long _selectedButtonIndex;
    long long _style;
    NSArray *_textFields;
    NSString *_title;
}

+ (id)dialogWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3;
+ (id)dialogWithTitle:(id)arg1 message:(id)arg2;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)_removeKeyWindow:(id)arg1;
- (void)_finishWithButtonIndex:(long long)arg1;
- (_Bool)_currentProcessLinksAppKit;
- (_Bool)_currentProcessLinksUIKit;
- (id)_createWindowAndMakeVisible;
- (void)_presentMacDialogFromWindow:(id)arg1;
- (_Bool)_presentiOSDialogFromViewController:(id)arg1;
- (void)presentSystemDialog;
- (void)presentSheetFromWindow:(id)arg1;
- (void)presentFromViewController:(id)arg1;
- (void)present;
- (void)addTextField:(id)arg1;
- (void)addButton:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3;

@end
