//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADTextBodyAutoFit.h>

__attribute__((visibility("hidden")))
@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit
{
    float mFontScalePercent;
    float mLineSpacingReductionPercent;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (float)lineSpacingReductionPercent;
- (float)fontScalePercent;
- (id)initWithFontScalePercent:(float)arg1 lineSpacingReductionPercent:(float)arg2;

@end

