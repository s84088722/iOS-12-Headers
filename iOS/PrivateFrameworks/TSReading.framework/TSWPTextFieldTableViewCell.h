//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <TSReading/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

@interface TSWPTextFieldTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_textField;
}

@property(readonly, retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)p_endEditingOnExit;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

