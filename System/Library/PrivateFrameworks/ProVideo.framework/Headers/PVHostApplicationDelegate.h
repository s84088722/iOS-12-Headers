/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVHostApplicationDelegate <NSObject>
@optional
-(id)effectTemplatesDirectoryName;
-(id)effectTemplatesBundle;
-(BOOL)wantsExtraLineSpacingForDiacritics;
-(BOOL)wantsDynamicLineSpacingForDiacritics;
-(BOOL)wantsToScaleEmojiToCapHeight;
-(BOOL)wantsToSkipSuggestedLineBreaksInParagraphLayout;
-(BOOL)wantsToUseBinarySearchForScalingToBothMargins;
-(BOOL)wantsToLimitLinesOfText;
-(unsigned)getNumberOfLinesToLimitTextTo;
-(BOOL)wantsToImproveQualityOfDraftQualityText;
-(BOOL)wantsToDownscaleGlyphsToOutputSize;
-(BOOL)wantsToSetTranscriptionsUsingArray;
-(BOOL)wantsToIgnoreTextBoundsOfTransparentObjects;
-(BOOL)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
-(BOOL)wantsToUseCachedTextureForText;
-(BOOL)wantsToIncludeSubstituteFontNameInAttributedString;
-(BOOL)wantsToIncludeTrackingValueInAttributedString;
-(BOOL)wantsToComputeTypographicHeightWithoutLastLineLeading;
-(BOOL)wantsToAdjustTextBoundsHeightUsingCapHeight;
-(BOOL)wantsToIncludeTrailingWhitespaceInParagraphLineWidth;
-(BOOL)wantsToCacheTopLevelGroupRender;
-(unsigned)getMaxGlyphResolution;

@end

