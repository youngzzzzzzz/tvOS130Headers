/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSDate, NSMutableData, NSDictionary;

@interface SDActivityKey : NSObject {

	BOOL _validKey;
	unsigned short _lastUsedCounter;
	NSUUID* _keyIdentifier;
	NSDate* _dateCreated;
	NSMutableData* _keyData;

}

@property (nonatomic,retain) NSUUID * keyIdentifier;                           //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * dateCreated;                             //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain) NSMutableData * keyData;                          //@synthesize keyData=_keyData - In the implementation block
@property (assign,nonatomic) unsigned short lastUsedCounter;                   //@synthesize lastUsedCounter=_lastUsedCounter - In the implementation block
@property (assign,getter=isValidKey,nonatomic) BOOL validKey;                  //@synthesize validKey=_validKey - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictRepresentation; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSUUID *)keyIdentifier;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(NSDictionary *)dictRepresentation;
-(NSMutableData *)keyData;
-(void)setValidKey:(BOOL)arg1 ;
-(void)setKeyIdentifier:(NSUUID *)arg1 ;
-(void)setKeyData:(NSMutableData *)arg1 ;
-(BOOL)isValidKey;
-(unsigned short)lastUsedCounter;
-(id)initWithDictRepresentation:(id)arg1 ;
-(void)setLastUsedCounter:(unsigned short)arg1 ;
@end
