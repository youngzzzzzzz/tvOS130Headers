/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface THAButton : NSObject {

	unsigned char _identifier;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned char identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned char)identifier;
-(void)setIdentifier:(unsigned char)arg1 ;
-(id)initWithType:(unsigned long long)arg1 identifier:(unsigned char)arg2 ;
-(long long)translateButtonType;
@end

