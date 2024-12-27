// Explanation in note khata
// Not use continue statement (Look the output)

#include<stdio.h>
int main()
{
    for(int i=100; i<=200; i++)
    {
        if( i%2==0 && i%3==0 && i%5==0)
        {
        printf("%d is number\n",i);
        
        }
    printf("%d is not the number\n",i);
    }
    

    return 0;
}

/*
100 is not the number
101 is not the number
102 is not the number
103 is not the number
104 is not the number
105 is not the number
106 is not the number
107 is not the number
108 is not the number
109 is not the number
110 is not the number
111 is not the number
112 is not the number
113 is not the number
114 is not the number
115 is not the number
116 is not the number
117 is not the number
118 is not the number
119 is not the number
120 is number  
120 is not the number // here 120 print again but we dont need 
121 is not the number
122 is not the number
123 is not the number
124 is not the number
125 is not the number
126 is not the number
127 is not the number
128 is not the number
129 is not the number
130 is not the number
131 is not the number
132 is not the number
133 is not the number
134 is not the number
135 is not the number
136 is not the number
137 is not the number
138 is not the number
139 is not the number
140 is not the number
141 is not the number
142 is not the number
143 is not the number
144 is not the number
145 is not the number
146 is not the number
147 is not the number
148 is not the number
149 is not the number
150 is number      // here 150 print again but we dont need
150 is not the number
151 is not the number
152 is not the number
153 is not the number
154 is not the number
155 is not the number
156 is not the number
157 is not the number
158 is not the number
159 is not the number
160 is not the number
161 is not the number
162 is not the number
163 is not the number
164 is not the number
165 is not the number
166 is not the number
167 is not the number
168 is not the number
169 is not the number
170 is not the number
171 is not the number
172 is not the number
173 is not the number
174 is not the number
175 is not the number
176 is not the number
177 is not the number
178 is not the number
179 is not the number
180 is number    // here 180 print again but we dont need
180 is not the number
181 is not the number
182 is not the number
183 is not the number
184 is not the number
185 is not the number
186 is not the number
187 is not the number
188 is not the number
189 is not the number
190 is not the number
191 is not the number
192 is not the number
193 is not the number
194 is not the number
195 is not the number
196 is not the number
197 is not the number
198 is not the number
199 is not the number
200 is not the number
*/