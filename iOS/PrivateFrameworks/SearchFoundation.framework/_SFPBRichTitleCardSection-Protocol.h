//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBColor, _SFPBImage, _SFPBMediaOffer, _SFPBPunchout;

@protocol _SFPBRichTitleCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSArray *offers;
@property(nonatomic) int playActionAlign;
@property(retain, nonatomic) _SFPBActionItem *playAction;
@property(retain, nonatomic) _SFPBImage *imageOverlay;
@property(nonatomic) _Bool thumbnailCropCircle;
@property(nonatomic) _Bool titleNoWrap;
@property(nonatomic) int titleWeight;
@property(nonatomic) int titleAlign;
@property(nonatomic) _Bool hideVerticalDivider;
@property(nonatomic) int auxiliaryAlignment;
@property(nonatomic) int auxiliaryBottomTextColor;
@property(copy, nonatomic) NSString *auxiliaryBottomText;
@property(copy, nonatomic) NSString *auxiliaryMiddleText;
@property(copy, nonatomic) NSString *auxiliaryTopText;
@property(copy, nonatomic) NSArray *moreGlyphs;
@property(nonatomic) _Bool reviewNewLine;
@property(copy, nonatomic) NSString *reviewText;
@property(retain, nonatomic) _SFPBImage *reviewGlyph;
@property(copy, nonatomic) NSString *ratingText;
@property(nonatomic) float rating;
@property(copy, nonatomic) NSString *descriptionText;
@property(nonatomic) _Bool isCentered;
@property(retain, nonatomic) _SFPBImage *titleImage;
@property(copy, nonatomic) NSString *contentAdvisory;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBMediaOffer *)offersAtIndex:(unsigned long long)arg1;
- (unsigned long long)offersCount;
- (void)addOffers:(_SFPBMediaOffer *)arg1;
- (void)clearOffers;
- (_SFPBImage *)moreGlyphsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moreGlyphsCount;
- (void)addMoreGlyphs:(_SFPBImage *)arg1;
- (void)clearMoreGlyphs;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end

