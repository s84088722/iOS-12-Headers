//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSAttachment : ICSProperty
{
}

- (_Bool)shouldObscureValue;
@property(retain, nonatomic) NSString *x_apple_ews_attachmentid;
@property(retain, nonatomic) NSString *x_apple_filename;
@property(retain, nonatomic) NSString *managed_filename;
@property(nonatomic) _Bool x_apple_autoarchived;
@property(retain, nonatomic) NSString *fmtype;
@property(retain, nonatomic) NSString *managed_id;
@property(nonatomic) int size;
- (id)filename;
- (_Bool)isBinary;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setData:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

