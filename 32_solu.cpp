{\rtf1\ansi\ansicpg936\cocoartf1671\cocoasubrtf100
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution \{\
public:\
    int longestValidParentheses(string s) \{\
        int result = 0, valid = 0;\
        stack<int> sta;\
        \
        for(int i=0;i<s.size();i++)\{\
            if(s[i] == '(') sta.push(i);\
            else if(s[i] == ')')\{\
                if(sta.empty()) valid = i+1;\
                else \{\
                    sta.pop();\
                    result = (sta.empty())? max(result, i-valid+1):max(result, i-sta.top());\
                \}\
            \}\
        \}\
        \
        return result;\
        \
    \}\
\};}