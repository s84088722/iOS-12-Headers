//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class OADParagraph;

__attribute__((visibility("hidden")))
@interface PMParagraphMapper : CMMapper
{
    OADParagraph *mParagraph;
}

- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(_Bool)arg3;
- (id)initWithOadParagraph:(id)arg1 parent:(id)arg2;
- (void)addEndCharacterStyleToStyle:(id)arg1;
- (id)fontScheme;
- (id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(_Bool)arg2;
- (int)firstTextRunFontSize;

@end

