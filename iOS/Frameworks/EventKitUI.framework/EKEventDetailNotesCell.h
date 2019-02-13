//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel, UITextView;
@protocol EKEventDetailNotesCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailNotesCell : EKEventDetailCell
{
    UILabel *_notesTitleView;
    UITextView *_notesView;
    _Bool _isTruncatingNotes;
    id <EKEventDetailNotesCellDelegate> _noteDelegate;
}

@property(nonatomic) __weak id <EKEventDetailNotesCellDelegate> noteDelegate; // @synthesize noteDelegate=_noteDelegate;
@property(readonly, nonatomic) _Bool isTruncatingNotes; // @synthesize isTruncatingNotes=_isTruncatingNotes;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (double)_layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setIsTruncatingNotes:(_Bool)arg1;
- (id)_notesView;
- (id)_notesTitleView;
- (_Bool)update;

@end

