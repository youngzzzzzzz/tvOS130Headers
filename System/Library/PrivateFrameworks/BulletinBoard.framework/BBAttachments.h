/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/NSCopying.h>
#import <BulletinBoard/NSSecureCoding.h>

@class NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding> {

	long long primaryType;
	NSCountedSet* _additionalAttachments;

}

@property (nonatomic,retain) NSCountedSet * additionalAttachments;              //@synthesize additionalAttachments=_additionalAttachments - In the implementation block
@property (assign,nonatomic) long long primaryType; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSCountedSet *)additionalAttachments;
-(void)setAdditionalAttachments:(NSCountedSet *)arg1 ;
-(long long)primaryType;
-(unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1 ;
-(unsigned long long)numberOfAdditionalAttachments;
-(void)addAttachmentOfType:(long long)arg1 ;
-(BOOL)isEqualToAttachments:(id)arg1 ;
-(void)setPrimaryType:(long long)arg1 ;
@end
