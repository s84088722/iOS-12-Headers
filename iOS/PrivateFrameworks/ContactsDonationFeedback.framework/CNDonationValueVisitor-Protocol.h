//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsDonationFeedback/NSObject-Protocol.h>

@class CNDonationValue, CNPhoneNumber, CNPostalAddress, NSData, NSPersonNameComponents, NSString;

@protocol CNDonationValueVisitor <NSObject>
- (void)visitDonationValue:(CNDonationValue *)arg1 imageData:(NSData *)arg2;
- (void)visitDonationValue:(CNDonationValue *)arg1 postalAddress:(CNPostalAddress *)arg2 style:(long long)arg3 label:(NSString *)arg4;
- (void)visitDonationValue:(CNDonationValue *)arg1 phoneNumber:(CNPhoneNumber *)arg2 label:(NSString *)arg3;
- (void)visitDonationValue:(CNDonationValue *)arg1 emailAddress:(NSString *)arg2 label:(NSString *)arg3;
- (void)visitDonationValue:(CNDonationValue *)arg1 nameComponents:(NSPersonNameComponents *)arg2;
@end

