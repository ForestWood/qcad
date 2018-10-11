// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMAPROPERTYATTRIBUTES_H
        #define RECMAPROPERTYATTRIBUTES_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPropertyAttributes.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaPropertyAttributes {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        setOption
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isReadOnly
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setReadOnly
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInvisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setInvisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isUndeletable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUndeletable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isAngleType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAngleType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIgnoreCase
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setIgnoreCase
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        affectsOtherProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAffectsOtherProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAllowMixedValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAllowMixedValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getChoices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setChoices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasChoices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isRichText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRichText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isStyle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStyle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mixWith
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isMixed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMixed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSum
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSum
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOnRequest
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOnRequest
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isCustom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isDimensionLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInteger
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isRedundant
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRedundant
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isVisibleToParent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isNumericallySorted
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNumericallySorted
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        equals
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_not_assign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPropertyAttributes* getSelf(const QString& fName, QScriptContext* context)
    ;static RPropertyAttributes* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumOption(QScriptEngine* engine, const RPropertyAttributes::Option& value)
    ;static  void fromScriptValueEnumOption(const QScriptValue& value, RPropertyAttributes::Option& out)
    ;};
    #endif
    