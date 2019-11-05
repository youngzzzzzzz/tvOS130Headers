/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHPerson;

@interface _PXForYouPeopleQuestion : NSObject {

	long long _questionType;
	PHPerson* _targetPerson;

}

@property (nonatomic,readonly) long long questionType;               //@synthesize questionType=_questionType - In the implementation block
@property (nonatomic,readonly) PHPerson * targetPerson;              //@synthesize targetPerson=_targetPerson - In the implementation block
-(long long)questionType;
-(PHPerson *)targetPerson;
-(id)initWithQuestionType:(long long)arg1 targetPerson:(id)arg2 ;
@end
