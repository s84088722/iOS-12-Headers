//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/NUIContainerBoxViewDelegate-Protocol.h>
#import <TemplateKit/NUIContainerStackViewDelegate-Protocol.h>

@class NSString, NUIContainerBoxView, TLKImage, TLKImageView, TLKMultilineText, UIBezierPath, UIButton, UILabel, UITextView;
@protocol TLKDescriptionViewDelegate;

@interface TLKDescriptionView : TLKView <NUIContainerBoxViewDelegate, NUIContainerStackViewDelegate>
{
    TLKImage *_image;
    TLKMultilineText *_text;
    TLKMultilineText *_title;
    NSString *_moreButtonText;
    id <TLKDescriptionViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_moreButton;
    UITextView *_detailsTextView;
    NUIContainerBoxView *_imageAndDescriptionBoxView;
    TLKImageView *_imageView;
    UIBezierPath *_imageViewExclusionPath;
    UIBezierPath *_moreButtonExclusionPath;
}

@property(retain) UIBezierPath *moreButtonExclusionPath; // @synthesize moreButtonExclusionPath=_moreButtonExclusionPath;
@property(retain) UIBezierPath *imageViewExclusionPath; // @synthesize imageViewExclusionPath=_imageViewExclusionPath;
@property(retain) TLKImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) NUIContainerBoxView *imageAndDescriptionBoxView; // @synthesize imageAndDescriptionBoxView=_imageAndDescriptionBoxView;
@property(retain) UITextView *detailsTextView; // @synthesize detailsTextView=_detailsTextView;
@property(retain) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak id <TLKDescriptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *moreButtonText; // @synthesize moreButtonText=_moreButtonText;
@property(retain, nonatomic) TLKMultilineText *title; // @synthesize title=_title;
@property(retain, nonatomic) TLKMultilineText *text; // @synthesize text=_text;
@property(retain, nonatomic) TLKImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)exclusionPathsForTextView;
- (_Bool)moreButtonIsHidden;
- (long long)numberOfLines;
- (id)detailTextViewText;
- (id)imageExclusionPath;
- (void)simulateMoreButtonPress;
- (void)moreButtonPressed;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (long long)containerBoxView:(id)arg1 verticalAlignmentForArrangedSubview:(id)arg2;
- (long long)containerBoxView:(id)arg1 horizontalAlignmentForArrangedSubview:(id)arg2;
- (_Bool)shouldHideMoreButtonForTextView:(id)arg1;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)observedPropertiesChanged;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

