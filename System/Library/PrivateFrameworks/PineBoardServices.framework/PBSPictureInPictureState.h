/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <PineBoardServices/NSSecureCoding.h>
#import <PineBoardServices/NSCopying.h>

@class BSSettings;

@interface PBSPictureInPictureState : NSObject <NSSecureCoding, NSCopying> {

	BSSettings* _settings;

}

@property (nonatomic,readonly) BSSettings * settings;                                                    //@synthesize settings=_settings - In the implementation block
@property (getter=isPictureInPictureActive,nonatomic,readonly) BOOL pictureInPictureActive; 
@property (nonatomic,readonly) unsigned long long presentationState; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BSSettings *)settings;
-(unsigned long long)presentationState;
-(id)initWithState:(id)arg1 ;
-(id)_initWithSettings:(id)arg1 ;
-(BOOL)isPictureInPictureActive;
-(id)initWithPresentationState:(unsigned long long)arg1 ;
@end

