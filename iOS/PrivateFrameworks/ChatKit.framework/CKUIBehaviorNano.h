//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKUIBehavior.h>

@interface CKUIBehaviorNano : CKUIBehavior
{
}

- (struct UIEdgeInsets)pluginBalloonInsetsForMessageFromMe:(_Bool)arg1;
- (struct CGSize)mapThumbnailFillSizeForWidth:(double)arg1;
- (struct CGSize)thumbnailFillSizeForWidth:(double)arg1 imageSize:(struct CGSize)arg2;
- (double)toFieldPreferredHeight;
- (id)messageAcknowledgmentPickerBarAcknowledgmentOrder;
- (id)messageAcknowledgmentPickerBarBubbleTailName;
- (id)messageAcknowledgmentPickerBarBubbleName;
- (struct CGSize)aggregateAcknowledgmentTranscriptBalloonSize;
- (struct CGSize)messageAcknowledgmentPickerBarItemViewSize;
- (struct CGPoint)messageAcknowledgmentTranscriptBalloonRelativePosition;
- (struct CGSize)messageAcknowledgmentTranscriptAcknowledgmentImageSize;
- (struct UIEdgeInsets)messageAcknowledgmentTranscriptGlyphInset;
- (struct CGSize)messageAcknowledgmentTranscriptBalloonSize;
- (id)messageAcknowledgmentPickerBarBubbleImage;
- (id)playButtonArrowImage;
- (id)playButtonImage;
- (id)contactAttachmentOrgFont;
- (id)contactAttachmentNameFont;
- (id)attachmentTextFont;
- (double)transcriptWaveformWidthForDuration:(double)arg1;
- (double)waveformHeight;
- (double)contactBalloonOrgBottomSpacing;
- (double)contactBalloonNameOrgSpacing;
- (double)contactBalloonTopNameSpacing;
- (double)contactBalloonHeight;
- (double)contactBalloonMinWidth;
- (double)contactBalloonInnerItemSpacing;
- (struct CGSize)contactImageSize;
- (struct CGSize)attachmentBalloonSize;
- (struct CGSize)documentIconSize;
- (long long)playButtonBackdropStyle;
- (_Bool)playButtonPunchesOutArrow;
- (_Bool)useSingleLineForContactVCardNames;
- (_Bool)showsVCalViewer;
- (_Bool)showsFileSizeInSubtitle;
- (_Bool)calculatesWidthForAttachmentBalloons;
- (_Bool)shouldFillAttachmentBalloon;
- (id)systemGrayChevronImage;
- (id)grayChevronImage;
- (id)whiteChevronImage;
- (id)gray_chevronImage;
- (id)impactSkinnyBalloonName;
- (id)impactBalloonName;
- (id)strokedTaillessBalloonName;
- (id)strokedBalloonName;
- (id)skinnyTaillessBalloonName;
- (id)skinnyBalloonName;
- (id)taillessBallonName;
- (id)balloonName;
- (double)audioBalloonWaveformTimeSpace;
- (struct UIEdgeInsets)taillessAttachmentBalloonAlignmentRectInsets;
- (struct UIEdgeInsets)attachmentBalloonAlignmentRectInsets;
- (struct UIEdgeInsets)bigEmojiBalloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)taillessBalloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)taillessSkinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)skinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)taillessBalloonMaskCapInsets;
- (struct UIEdgeInsets)balloonMaskCapInsets;
- (struct CGSize)taillessSkinnyBalloonMaskSize;
- (struct CGSize)skinnyBalloonMaskSize;
- (struct CGSize)taillessBalloonMaskSize;
- (struct CGSize)balloonMaskSize;
- (double)balloonMaskTailHeight;
- (double)balloonMaskTailWidth;
- (_Bool)opensLocationsInMapsApp;
- (_Bool)showsPlaceCardForBalloonViewTitleTap;
- (_Bool)handlesBalloonViewTitleTapsSeparately;
- (_Bool)playsInlineVideo;
- (_Bool)shouldAdjustWidthForSendFailure;
- (_Bool)hyphenatesTextContent;
- (_Bool)shouldUseDynamicGradient;
- (id)orbShareLocationImage;
- (id)orbDetailsImage;
- (id)orbReplyImage;
- (id)orbComposeImage;
- (id)surfReplyImage;
- (id)arouetReplyImage;
- (id)digitalTouchReplyImage;
- (id)dictationReplyImage;
- (id)emojiReplyImage;
- (id)datestampTranscriptBoldTextAttributes;
- (id)datestampTranscriptTextAttributes;
- (id)stampTranscriptBoldTextAttributes;
- (id)stampTranscriptTextAttributes;
- (id)senderTranscriptTextAttributes;
- (id)transcriptDrawerFont;
- (id)transcriptBoldTextFont;
- (id)transcriptTextFont;
- (double)checkmarkHorizontalPadding;
- (double)balloonMaxWidthForTranscriptWidth:(double)arg1 marginInsets:(struct UIEdgeInsets)arg2 shouldShowPluginButtons:(_Bool)arg3 shouldShowCharacterCount:(_Bool)arg4;
- (double)balloonBalloonTranscriptSpace:(unsigned char)arg1;
- (double)largeTranscriptSpace;
- (double)mediumTranscriptSpace;
- (double)smallTranscriptSpace;
- (double)bottomTranscriptSpace;
- (double)topTranscriptSpace;
- (double)transcriptDrawerGestureAcceleration;
- (double)transcriptDrawerMaxContentOffsetXForMarginInsets:(struct UIEdgeInsets)arg1;
- (double)transcriptDrawerSpace;
- (struct UIEdgeInsets)contactPhotoTranscriptInsets;
- (struct UIEdgeInsets)senderTranscriptInsets;
- (double)emojiPreviewMaxWidth;
- (double)previewMaxWidth;
- (struct UIEdgeInsets)minTranscriptMarginInsets;
- (_Bool)supportsContiguousAttachments;
- (_Bool)usesDataDetectorsUI;
- (_Bool)shouldInsetForStatusBar;
- (_Bool)timestampsPushBalloons;
- (_Bool)showsReplyButtonsInTranscript;
- (_Bool)shouldUseRotisserieScrolling;
- (_Bool)shouldShowContactPhotosInTranscript;
- (_Bool)scrollToBottomStopsAtTopOfLastBubble;
- (_Bool)showsProgressInNavigationBar;
- (_Bool)shouldHideStatusBarForFullScreenEffects;
- (id)defaultWaveformImage;
- (id)conversationListGroupCountFont;
- (id)conversationListDateFont;
- (id)conversationListSummaryFont;
- (id)conversationListSenderFont;
- (struct UIEdgeInsets)conversationListFilterSegmentInset;
- (unsigned long long)conversationListCellMaxSummaryLength;
- (unsigned long long)conversationListCellSummaryNumberOfLines;
- (double)conversationListCellRightMargin;
- (double)conversationListCellLeftMargin;
- (double)summaryDateConversationListSpace;
- (double)senderSummaryConversationListSpace;
- (double)bottomConversationListSpace;
- (double)topConversationListSpace;
- (double)conversationListCellBackgroundPadding;
- (_Bool)showsSegmentedControlForFilteredConversationList;
- (_Bool)showsConversationListCellChevronImage;
- (_Bool)hidesUnreadIndicatorWhenEditing;
- (_Bool)showsNoMessagesDialog;
- (_Bool)shouldShowSearchBarInConversationList;
- (double)extensionBalloonMaximumHeight;
- (double)transcriptButtonCharge;
- (double)maxTranscriptPortraitHeight;
- (unsigned long long)defaultConversationLoadMoreCount;
- (unsigned long long)defaultConversationViewingMessageCount;
- (_Bool)usesNavigationBarControls;
- (_Bool)usesEntryView;
- (_Bool)shouldUseTranslucentBars;
- (_Bool)recordsRecentContact;
- (_Bool)showsCompositionPanel;
- (_Bool)showsSendAnimation;
- (_Bool)automaticallyShowsKeyboard;
- (_Bool)darkUIEnabled;
- (_Bool)isSizeConstrained;
- (_Bool)promptsForReadReceiptsSetting;
- (_Bool)resetsIdleTimer;
- (_Bool)shouldGrabBackgroundAssertion;
- (id)theme;

@end

