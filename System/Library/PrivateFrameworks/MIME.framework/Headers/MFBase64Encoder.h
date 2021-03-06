//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFBase64Encoder : MFBaseFilterDataConsumer
{
    const char *_table;
    unsigned long long _left;
    unsigned char _leftovers[3];
    unsigned long long _line;
    unsigned long long _lineBreak;
    BOOL _padChar;
}

@property(nonatomic) BOOL padChar; // @synthesize padChar=_padChar;
@property(nonatomic) unsigned long long lineBreak; // @synthesize lineBreak=_lineBreak;
- (void)setStandardLineBreak;
@property(nonatomic) _Bool allowSlash;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)initWithConsumers:(id)arg1;

@end

