//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (HFAdditions)
+ (id)hf_formattedPersonNameForFirstName:(id)arg1 lastName:(id)arg2;
- (id)hf_toHexString:(char *)arg1 length:(unsigned int)arg2;
- (unsigned int)hf_UTF8Length;
- (id)hf_stringByLowercasingFirstWord;
- (id)hf_stringByCapitalizingFirstWord;
- (id)hf_stringByTransformingFirstWordUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hf_isEmail;
- (_Bool)hf_isPhoneNumber;
- (id)hf_SHA256;
- (id)hf_SHA1;
- (id)hf_MD5;
@end

