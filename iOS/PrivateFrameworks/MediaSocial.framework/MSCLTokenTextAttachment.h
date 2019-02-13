//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@class MSCLTokenTextAttachmentView, NSString;

@interface MSCLTokenTextAttachment : NSTextAttachment
{
    id _representedObject;
    MSCLTokenTextAttachmentView *_tokenView;
}

@property(retain, nonatomic) MSCLTokenTextAttachmentView *tokenView; // @synthesize tokenView=_tokenView;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
@property(readonly, copy, nonatomic) NSString *representedText;
- (id)attributedStringWithBaseAttributes:(id)arg1;

@end

