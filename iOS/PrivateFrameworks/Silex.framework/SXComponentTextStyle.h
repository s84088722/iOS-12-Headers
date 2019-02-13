//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXTextStyle.h>

@class SXDropCapStyle;

@interface SXComponentTextStyle : SXTextStyle
{
}

- (long long)hyphenationWithValue:(id)arg1 withType:(int)arg2;
- (double)relativeLineHeightWithValue:(id)arg1 withType:(int)arg2;
- (long long)exactLineHeightWithValue:(id)arg1 withType:(int)arg2;
- (long long)lineHeightWithValue:(id)arg1 withType:(int)arg2;
- (long long)textAlignmentWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) SXDropCapStyle *dropCapStyle; // @dynamic dropCapStyle;
@property(readonly, nonatomic) long long exactLineHeight; // @dynamic exactLineHeight;
@property(readonly, nonatomic) long long firstLineIndent; // @dynamic firstLineIndent;
@property(readonly, nonatomic) _Bool hangingPunctuation; // @dynamic hangingPunctuation;
@property(readonly, nonatomic) long long hyphenation; // @dynamic hyphenation;
@property(readonly, nonatomic) long long lineHeight; // @dynamic lineHeight;
@property(readonly, nonatomic) SXTextStyle *linkStyle; // @dynamic linkStyle;
@property(readonly, nonatomic) long long paragraphSpacingAfter; // @dynamic paragraphSpacingAfter;
@property(readonly, nonatomic) long long paragraphSpacingBefore; // @dynamic paragraphSpacingBefore;
@property(readonly, nonatomic) double relativeLineHeight; // @dynamic relativeLineHeight;
@property(readonly, nonatomic) long long textAlignment; // @dynamic textAlignment;

@end

