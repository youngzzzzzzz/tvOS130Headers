/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:43 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@interface ALCLBodyMetrics : PBCodable <NSCopying> {

	float _age;
	int _gender;
	float _heightM;
	float _hrmax;
	float _hrmin;
	float _hronset;
	float _pal;
	float _vo2max;
	float _weightKG;

}

@property (assign,nonatomic) int gender;                  //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) float heightM;               //@synthesize heightM=_heightM - In the implementation block
@property (assign,nonatomic) float weightKG;              //@synthesize weightKG=_weightKG - In the implementation block
@property (assign,nonatomic) float vo2max;                //@synthesize vo2max=_vo2max - In the implementation block
@property (assign,nonatomic) float age;                   //@synthesize age=_age - In the implementation block
@property (assign,nonatomic) float hrmin;                 //@synthesize hrmin=_hrmin - In the implementation block
@property (assign,nonatomic) float hrmax;                 //@synthesize hrmax=_hrmax - In the implementation block
@property (assign,nonatomic) float hronset;               //@synthesize hronset=_hronset - In the implementation block
@property (assign,nonatomic) float pal;                   //@synthesize pal=_pal - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)age;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(void)setAge:(float)arg1 ;
-(id)genderAsString:(int)arg1 ;
-(int)StringAsGender:(id)arg1 ;
-(float)heightM;
-(float)weightKG;
-(float)vo2max;
-(float)hrmin;
-(float)hrmax;
-(float)hronset;
-(float)pal;
-(void)setHeightM:(float)arg1 ;
-(void)setWeightKG:(float)arg1 ;
-(void)setVo2max:(float)arg1 ;
-(void)setHrmin:(float)arg1 ;
-(void)setHrmax:(float)arg1 ;
-(void)setHronset:(float)arg1 ;
-(void)setPal:(float)arg1 ;
@end
