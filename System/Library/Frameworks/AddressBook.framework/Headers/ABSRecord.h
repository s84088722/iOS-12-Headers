/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, ABSAddressBook, ABSSource;


@protocol ABSRecord <NSObject>
@property (nonatomic,readonly) int id; 
@property (nonatomic,readonly) NSString * CNIdentifierString; 
@property (nonatomic,readonly) unsigned type; 
@property (assign,nonatomic,__weak) ABSAddressBook * addressBook; 
@property (assign,nonatomic,__weak) ABSSource * source; 
@property (nonatomic,readonly) NSString * compositeName; 
@property (nonatomic,retain) id<ABSCNImplementation> cnImpl; 
@required
-(const void*)copyValueForProperty:(int)arg1;
-(id<ABSCNImplementation>)cnImpl;
-(void)setCnImpl:(id)arg1;
-(BOOL)setValue:(const void*)arg1 forProperty:(int)arg2 withError:(*)arg3;
-(BOOL)removeProperty:(int)arg1 withError:(id*)arg2;
-(void)replaceRecordStorageWithCNObject:(id)arg1;
-(NSString *)CNIdentifierString;
-(ABSAddressBook *)addressBook;
-(void)setAddressBook:(id)arg1;
-(NSString *)compositeName;
-(int)id;
-(unsigned)type;
-(void)setSource:(id)arg1;
-(ABSSource *)source;

@end
